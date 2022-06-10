{-# LANGUAGE OverloadedStrings #-}
module GameLoop where

import Data.Time

main :: IO ()
main = do
  --init functions here
  gameLoop

gameLoop :: IO ()
gameLoop = do
  start <- getCurrentTime
  --input
  --update
  --render
  delay' start 
  gameLoop

delay' :: UTCTime -> IO ()
delay' start = do 
  end <- getCurrentTime
  if diffUTCTime end start < 1.0/60
  then delay' start 
  else return ()

