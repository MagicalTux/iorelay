<?php

$sock = stream_socket_client('udg:///tmp/test.sock');

fwrite($sock, 'MSG TEST');

