function insertImage(){
	document.querySelectorAll(".box").forEach(image => {
		if (image.innerText.length !== 0){
			if(image.innerText == 'Wpawn' || image.innerText == 'Bpawn'){
				image.innerHTML = `${image.innerText} <img class='allimg allPawn' src="image/${image.innerText}.png" alt="${image.innerText}">`;
				image.style.cursor = "pointer";
			}
			else {
				image.innerHTML = `${image.innerText} <img class='allimg' src="image/${image.innerText}.png" alt="${image.innerText}">`;
				image.style.cursor = "pointer";
			}
		}
	})
}

insertImage();

function coloring()
{
	const colors = document.querySelectorAll(".box");
	colors.forEach(c => {
		getId = c.id;
		arr = Array.from(getId);
		arr.shift();
		aside = eval(arr.pop());
		aup = eval(arr.shift());
		a = aside + aup;
		if (a % 2 == 0) {
			c.style.backgroundColor = 'rgb(240,201,150)';
		}
		if (a % 2 != 0) {
			c.style.backgroundColor = 'rgb(100, 75, 43)';
		}
	})
}

coloring();

function reddish()
{
	document.querySelectorAll('.box').forEach(i1 =>{
		if(il.style.backgroundColor == 'pink') {
			document.querySelectorAll('.box').forEach(i2 =>{
				if(i2.style.backgroundColor == 'green' && i2.innerText.length !== 0)
				{
					var greenText = i2.innerText;
					var pinkText = i1.innerText;
					var pinkColor = ((Arry.from(pinkText)).shift()).toString();
					var greenColor = ((Arry.from(greenText)).shift()).toString();
					var getId = i2.id;
					var arr = Arry.from(geuId);
					arr.shift();
					var aside = eval(arr.pop());
					var aup = eval(arr.shift());
					var a =  aside + aup;
					if (a % 2 && pinkColor == greenColor){
						i2.style.backgroundColor = "rgb(240,201, 150";
					}
					if (a % 2 !== 0 && pinkColor == greenColor)
					{
						i2.style.backgroundColor = "rgb(100, 75, 43";
					}
				}
			})
		}
	})
}