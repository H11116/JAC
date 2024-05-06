<?php

//SET time_zone = 'Asia/Tehran';

$hostname = 'localhost';    // Your MySQL hostname.217.66.216.77. Usualy named as 'localhost', so you're NOT necessary to change this even this script has already online on the internet.
$dbname   = 'bastink';		    // Your database name. 
$username = 'root';        // Your database username. 
$password = '';         // Your database password. If your database has no password, leave it empty. 


// Let's connect to host
@mysql_connect($hostname, $username, $password) or DIE('<script>window.location="../login.php?mess=srv_down"</script>');
// Select the database
mysql_select_db($dbname) or DIE('<script>window.location="../login.php?mess=db_inactive"</script>');

?>
   