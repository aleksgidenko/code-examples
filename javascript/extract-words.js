// Shakespeare's Winter's Tale - Act 1, Scene 2
var text = `Nine changes of the watery star hath been
The shepherd's note since we have left our throne
Without a burthen: time as long again
Would be find up, my brother, with our thanks;
And yet we should, for perpetuity,
Go hence in debt: and therefore, like a cipher,
Yet standing in rich place, I multiply
With one 'We thank you' many thousands moe
That go before it.`

function extractWords(text) {
  words = []
  buf = ''
  for (var i = 0; i < text.length; i++) {
    if (text[i] === ' ' || text[i] === '\n') {
      words.push(buf)
      buf = ''
    } else {
      if (text[i] !== '.' && text[i] !== ',' && text[i] !== ':' && text[i] !== ';') {
        buf = buf + text[i]
      }
    }
  }
  words.push(buf)
  return words
}

var words = extractWords(text)
console.log(words)
