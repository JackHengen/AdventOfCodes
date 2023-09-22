import Data.String (IsString (fromString))
import Data.Text
import GHC.Cmm (SectionType (Text))

-- typeclasses are classes that implement certain functions, they have an instance of that typeclass

-- info command ghci gives info on types and typeclasses
-- t command gives info on types in a function or const
x = fromString "Hello" :: Text

y = fromString "Hello" :: Text

main :: IO ()
main = do
  print $ show $ x == y
  print x