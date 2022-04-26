string s = "Butterfly";
for (char&amp; c : s)
  if (c &gt;= 'a' &amp;&amp; c &lt;= 'l')
    c = toupper(c);
for (char c : s) cout &lt;&lt; c;
cout &lt;&lt; '\n';
