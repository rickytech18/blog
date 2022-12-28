<h1>Risolutore di equazioni di 2^ grado</h1>
    <p>Questo applicativo permette di risolvere le equazioni di secondo grado nella forma <em>ax<sup>2</sup>+bx+c=0</em>, mediante l'inserimento dei valori di <em>a</em>, <em>b</em> e <em>c</em>.</p>
    <form id="form1">
        <label for="a">a: </label><input type="number" name="a" id="a">
        <label for="b"> b: </label><input type="number" name="b" id="b">
        <label for="c"> c: </label><input type="number" name="c" id="c"><br><br>
        <input type="submit" value="Calcola!" onclick="risolviEquazione()">
    </form>
    <p id="soluzione"></p>
    <script>
        function risolviEquazione() {
            var valori = document.getElementById("form1");
            var a = valori[0].value;
            var b = valori[1].value;
            var c = valori[2].value;
            var delta = 0;
            var soluzione = "";
            var x1 = 0;
            var x2 = 0;

            if (a != 0) {
                delta = calcolaDelta(a,b,c);
                alert("Delta = " + delta);
                if (delta < 0) {
                    alert("Non ci sono soluzioni nel campo dei Reali");
                } else if (delta == 0) {
                    alert("Le soluzioni sono coincidenti");
                    x1 = calcolaSoluzione(a,b);
                    x2 = x1;
                    alert("X1 = " + x1 + " " + "X2: " + x2);
                } else {
                    alert("Sono state trovate due soluzioni");
                    x1 = calcolaX1(a,b,delta);
                    x2 = calcolaX2(a,b,delta);
                    alert("X1 = " + x1 + " " + "X2: " + x2);
                }
            } else if (b == 0) {
                alert("La soluzione è indeterminata");
            } else {
                alert("Non ci sono soluzioni");
            }
        }
        
        function calcolaDelta(a, b, c) {
            var delta;
            delta = Math.pow(b,2) - 4 * a * c;
            return delta;
        }

        function calcolaSoluzione(a, b) {
            var soluzione = -b / (2 * a);
            return soluzione;
        }
        
        function calcolaX1(a, b, delta) {
            var x1 = (-b + Math.sqrt(delta) / (2 * a));
            return x1;
        }

        function calcolaX2(a, b, delta) {
            var x2 = (-b - Math.sqrt(delta) / (2 * a));
            return x2;
        }
    </script>
