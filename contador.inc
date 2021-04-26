<?php

    $arquivo = "contador.txt"; //arquivo do contador
    //Incrementa o arquivo se existir
    if(file_exists($arquivo)){
        $valor_atual = file_get_contents($arquivo);
        $valor_atual = chop ($valor_atual);
        $valor_atual++;
    }
    else{
        $valor_atual = 1;
    }

    //grava o valor no arquivo
    $ponteiro = fopen($arquivo, "w");
    fwrite($ponteiro, $valor_atual);
    fclose($ponteiro);

?>