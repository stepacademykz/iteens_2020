<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
    <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;500;900&display=swap" rel="stylesheet">
</head>
<body>
<a href="index.php">
<div class="breack">
    <img src="img/arrow.svg" alt="">
    <b>Вернуться!</b>
</div>
</a>
<?php
//header('Location: database.php');

//парсинг Регионов из названий файлов
$mass_formuls_pollution = [0.24021,0.290802,0.199352,0.158642,0.1398];
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
    echo "<div class='title'>"."вид транспорта: ".$_TRANSPORTS[$tranport]."</div>";
    echo " <div class='subtitle'>".
    "<div class='sub-disctrict sub '>район</div>".
    "<div class='sub-amount sub'>кол-во трансп.</div>".
    "<div class='sub-amount sub m'>янв</div>".
    "<div class='sub-amount sub m'>фев</div>".
    "<div class='sub-amount sub m'>мар</div>".
    "<div class='sub-amount sub m'>апр</div>".
    "<div class='sub-amount sub m'>май</div>".
    "<div class='sub-amount sub m'>июн</div>".
    "<div class='sub-amount sub m'>июл</div>".
    "<div class='sub-amount sub m'>авг</div>".
    "<div class='sub-amount sub m'>сен</div>".
    "<div class='sub-amount sub m'>окт</div>".
    "<div class='sub-amount sub m'>ноя</div>".
    "<div class='sub-amount sub m'>дек</div>"."</div>";
    echo "<table>";
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
        $amounts=explode(" ", $mass_average[$tranport]);
        $amounts_int = (int)$amounts;
        echo "<div style='background-color:white;border-top:3px solid black; display:flex; justify-content:space-between;'>"
           ."<div class=' district' style='background-color:red;'>".
            $_DISTRICTS[$district]."</div>"."<div class='amount'>".$mass_tranport[$district]."</div>".
            "<div class='coll'>".round(((int)$amounts[0])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district]),2) ."</div>"."<div class='coll'>".round(((int) $amounts[1])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district]),2)."</div>"."<div class='coll' '>". ((int) $amounts[2])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>". ((int) $amounts[3])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>". ((int) $amounts[4])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll' >".((int) $amounts[5])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll' >".((int) $amounts[6])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>".((int) $amounts[7])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>".((int) $amounts[8])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>".((int) $amounts[9])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>".((int) $amounts[10])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>"."<div class='coll'>".((int) $amounts[11])*$mass_formuls_pollution[$tranport]*((int)$mass_tranport[$district])."</div>".
        "</div>"; 
        
       
       
        
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

</body>
</html>