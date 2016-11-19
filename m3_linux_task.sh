#!/bin/bash
wget -q -O- https://pogoda.mail.ru/prognoz/sankt_peterburg/extended/| grep -o -E '.*<span class="heading__inner_light">|<div class="day__date">.*|<div class="day__temperature ">.*'|sed 's/<span class="heading__inner_light">//'|sed 's/<div class="day__date">//'|sed 's/<div class="day__temperature ">//'|sed 's/<\/div>//'|sed 's/&deg;//'|sed 's/^[ \t]*//' > hello.txt

