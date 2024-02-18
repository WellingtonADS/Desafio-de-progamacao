const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  });
  
  let name;
  let xp;
  
  readline.question('Insira o nome do heroi: ', (heroName) => {
    name = heroName;
    readline.question('Insira o nivel do heroi: ', (heroLevel) => {
      xp = parseInt(heroLevel);
  
      if (xp < 1000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Ferro**`);
      else if (xp >= 1000 && xp < 2000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Bronze**`);
      else if (xp >= 2000 && xp < 5000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Prata**`);
      else if (xp >= 5000 && xp < 7000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Ouro**`);
      else if (xp >= 7000 && xp < 8000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Platina**`);
      else if (xp >= 8000 && xp < 9000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Ascendente**`);
      else if (xp >= 9000 && xp < 10000)
        console.log(`Heroi ${name}\t xp ${xp}\t está no nível **Imortal**`);
      else if (xp >= 10001)
        console.log(`Heroi **${name}**\t xp ${xp}\t está no nível **Radiante**`);
  
      readline.close();
    });
  });
  