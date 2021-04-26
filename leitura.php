<?php

    include "contador.inc";

    $ponteiro = fopen("leitura.txt", "r");
    $conteudo = fread($ponteiro, 30);
    echo $conteudo;
    fclose($ponteiro);

?>