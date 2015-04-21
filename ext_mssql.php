<?hh

<<__Native>>
function mssql_bind(resource $stmt, string $param_name, mixed &$var, int $type, bool $is_output = false,
                    bool $is_null = false, int $maxlen = -1 ): bool;

<<__Native>>
function mssql_connect(string $servername, string $username, string $password, bool $new_link = false): mixed;

<<__Native>>
function mssql_close(resource $link_identifier): bool;

<<__Native>>
function mssql_data_seek(resource $result_identifier, int $row_number): bool;