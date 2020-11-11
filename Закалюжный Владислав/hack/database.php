<?php //я бы тут сделал красивую бд но времени и опыта не хватает поэтому пусть пока остаётся как заготовка может если врмя хватит то я сделаю
$driver = 'mysql';
$host = 'localhost';
$db_name = 'hakaton';
$db_user = 'root';
$db_pass = '';
$db_charset = 'utf8';
$options = [PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION];

try{
    $pdo = new PDO("$driver:host=$host;dbname=$db_name;charset=$db_charset",$db_user,$db_pass,$options);
} catch(PDOException $e){
    die("не могу подключиться к базе данных");
}
$result = $pdo->query('SELECT * FROM bus_amount');
while($row=$result->fetch(PDO::FETCH_ASSOC)){
    echo $row['id']." ".$row['amount']."<br>";
}
?>