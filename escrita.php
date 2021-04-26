<?php


    $conteudo = "Este texto será escrito no arquivo!";
    $ponteiro = fopen("escrita.txt", "w");
    fwrite($ponteiro, $conteudo);
    fclose($ponteiro);


?>