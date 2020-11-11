<?php
//header('Location: database.php');

//парсинг Регионов из названий файлов
$_DISTRICTS = array();
$files_path_averageMileage = array();
$direction = opendir('data/region');
$count_files=0;
while($files = readdir($direction)){ //подсчёт файлов пробег по каталогу
    if($files =="."||$files==".."||is_dir(''.$files))
    {
        continue;
    }
    $files_path_averageMileage[$count_files] = $files;
    $name_files=explode("_", $files); //разбиение названия файла на слова
    $_DISTRICTS[$count_files]=$rest = substr($name_files[2], 0, strlen($name_files[2])-4); //обрезание лишнего и запись в массив регионов
    $count_files++;
 
}
$massiv = array( array());
$_TRANSPORTS = array();
$direction = opendir('data/transport');
$count_files=0;
$files_path_transport = array();
while($files = readdir($direction)){ //подсчёт файлов пробег по каталогу 'TRANSPORT'
    if($files =="."||$files==".."||is_dir(''.$files))
    {
        continue;
    }
    $files_path_transport[$count_files] = $files;
    $name_files=explode("_", $files); //разбиение названия файла на слова
    $_TRANSPORTS[$count_files]=$rest = substr($name_files[2], 0, strlen($name_files[2])-8); //обрезание лишнего и запись в массив регионов
    $count_files++;

}

for($tranport=0;$tranport<count($_TRANSPORTS);$tranport++)
{
    echo "<br>".$_TRANSPORTS[$tranport]."<br>";
    $file_transport = fopen("data/transport/".$files_path_transport[$tranport],"r+"); // открытие файла с количеством транспорта
    $count = 0;
    while (!feof($file_transport)) // копирование данныx из файла в массив
    {
        $mass_tranport[$count] = fgets($file_transport, 999); 
        $count++;
    }
    for($district=0;$district<count($_DISTRICTS);$district++)
    {
        $mass_average = array();
        $file_average=fopen("data/region/".$files_path_averageMileage[$district],"r+");
        $count_a=0;
        while(!feof($file_average))
        {
            $mass_average[$count_a]=fgets($file_average,100);
            $count_a++;
        }
        fclose($file_average);
        echo $_DISTRICTS[$district].$mass_tranport[$district].">>>".$mass_average[$tranport]."<br>";
    }
}

exit;





/*$dir = opendir('data');
$coun = 0;
while($files = readdir($dir)){
    if($files == '.' || $files == '..' || is_dir('' . $file)){
        continue;
    }
  
    echo $files;
    echo "<br>";
    $coun++;
}
echo 'Количество файлов: ' . $coun;
*/


?>
