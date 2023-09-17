const fs = require('fs');

for (let i = 1; i < 101; i++) {
    fs.mkdirSync(`excersise-${i}`);
    fs.writeFileSync(`./excersise-${i}/main.c`, `
#include <stdio.h>

int main() {
    return 0;
}
    `);
}