// // this is the solution i have submittedprocess.stdin.resume();
// process.stdin.setEncoding("utf-8");
// var arr = "";
// process.stdin.on("data", function (chunk) {
//   arr += chunk;
// });
// process.stdin.on("end", function () {
//   arr = arr.split("\n");
//   var n = parseInt(arr.shift()); // in order ot get no of test cases
//   for (let i = 0; i < n; i++) {
//     //loop through no of test cases.
//     var a = parseInt(arr[i].split(" ")[0]); //get first no
//     var b = parseInt(arr[i].split(" ")[1]); // get second no
//     console.log(a + b); //output the result
//   }
// });

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .replace(/\s*$/, "")
    .split("\n")
    .map((str) => str.replace(/\s*$/, ""));

  main();
});

function readLine() {
  return inputString[currentLine++];
}

// Complete the plusMinus function below.
function plusMinus(arr) {
  const n = arr.length;
  let pCount = 0;
  let nCount = 0;
  let zeroCount = 0;
  for (let i = 0; i < n; i++) {
    if (arr[i] > 0) {
      pCount++;
    } else if (arr[i] < 0) {
      nCount++;
    } else {
      zeroCount++;
    }
  }

  //test passed even not rounding the answers
  console.log(
    `${Math.round((pCount / n) * 1000000) / 1000000}\n${
      Math.round((nCount / n) * 1000000) / 1000000
    }\n${Math.round((zeroCount / n) * 1000000) / 1000000}`
  );
}

function main() {
  const n = parseInt(readLine(), 10);

  const arr = readLine()
    .split(" ")
    .map((arrTemp) => parseInt(arrTemp, 10));

  plusMinus(arr);
}
