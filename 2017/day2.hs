import Data.String (IsString (fromString))
import Data.Text (Text, splitOn)
import Data.Text.Read (decimal)

input =
  fromString
    "104 240 147 246 123 175 372 71 116 230 260 118 202 270 277 292\n\
    \740 755 135 205 429 822 844 90 828 115 440 805 526 91 519 373\n\
    \1630 991 1471 1294 52 1566 50 1508 1367 1489 55 547 342 512 323 51\n\
    \1356 178 1705 119 1609 1409 245 292 1434 694 405 1692 247 193 1482 1407\n\
    \2235 3321 3647 212 1402 3711 3641 1287 2725 692 1235 3100 123 144 104 101\n\
    \1306 1224 1238 186 751 734 1204 1275 366 149 1114 166 1118 239 153 943\n\
    \132 1547 1564 512 2643 2376 2324 2159 1658 107 1604 145 2407 131 2073 1878\n\
    \1845 91 1662 108 92 1706 1815 1797 1728 1150 1576 83 97 547 1267 261\n\
    \78 558 419 435 565 107 638 173 93 580 338 52 633 256 377 73\n\
    \1143 3516 4205 3523 148 401 3996 3588 300 1117 2915 1649 135 134 182 267\n\
    \156 2760 1816 2442 2985 990 2598 1273 167 821 138 141 2761 2399 1330 1276\n\
    \3746 3979 2989 161 4554 156 3359 173 3319 192 3707 264 762 2672 4423 2924\n\
    \3098 4309 4971 5439 131 171 5544 595 154 571 4399 4294 160 6201 4329 5244\n\
    \728 249 1728 305 2407 239 691 2241 2545 1543 55 2303 1020 753 193 1638\n\
    \260 352 190 877 118 77 1065 1105 1085 1032 71 87 851 56 1161 667\n\
    \1763 464 182 1932 1209 640 545 931 1979 197 1774 174 2074 1800 939 161"

split :: String -> Char -> [String]
split [] delim = [""]
split (c : cs) delim
  | c == delim = "" : rest
  | otherwise = (c : head rest) : tail rest
  where
    rest = split cs delim

x = split input '\n'

splitByNewLines :: Text -> [Text]
splitByNewLines strIn = splitOn (fromString "\n" :: Text) strIn

splitBySpace :: Text -> [Text]
splitBySpace strIn = splitOn (fromString " " :: Text) strIn

getStrsSep :: Text -> [[Text]]
getStrsSep strIn = map splitBySpace $ splitByNewLines strIn

getIntsSep :: Text -> [[Int]]
getIntsSep strIn = map (map (decimal)) strIn -- something with either and reading left or right
