<!DOCTYPE html>
<html lang="ja">
  <head>
    <meta charset="UTF-8"/>
    <script type="text/javascript">
      function sum()
      {
          //aとbが文字列で引き出されているので、数字に変換するようにした 
          var a = parseFloat(form.a.value);
          var b = parseFloat(form.b.value);
          form.c.value = a + b;
      }
    </script>
  </head>
  <body>
    2つの数の和を求めます。
    <br>
    <form name="form">
      <input type="text" name="a" size=10><br>
      <input type="text" name="b" size=10><br>
      <input type="button" value="合計" onclick="sum()"><br>
      <input type="text" name="c" size=10><br>
    </form>
  </body>
</html>
