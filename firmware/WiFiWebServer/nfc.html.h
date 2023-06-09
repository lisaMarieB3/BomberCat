const char* nfc_html = R"=====(<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- Refresh every 5 seconds -->
    <meta http-equiv="refresh" content="2">
    <title>NFC</title>
    <!-- <link rel="shortcut icon" href="./Símbolo EC.svg" type="image/x-icon"> -->
    <link rel="stylesheet" href="styles.css">
</head>

<body id="nfc">
    <header>
        <div>
            <h4 class="config-header">NFC Configurations</h4>
        </div>
    </header>
    <main>
        <div class="main-content">
            <section class="card">
                <div class="card-container">
                    <h3 class="i-title">Read VISA</h3>
                    <!-- <img src="./visa.png" alt="visa" class="card-icon"> -->
                </div>
            </section>
            <section class="nfc">
                <div class="nfc-container">
                    <p id="tvPollMode"></p>
                    <form action="#" class="read-form">
                        <input type="number" id="card-number" placeholder="Card number will appear here"
                            class="inputC text-card" readonly>
                        <input type="number" id="card-date" placeholder="Card date will appear here"
                            class="inputC text-date" readonly>
                        <input type="number" id="card-code" placeholder="Card code will appear here"
                            class="inputC text-code" readonly>
                        <input type="submit" value="Read" class="primary-button read-button">
                    </form>
                </div>
            </section>

            <section class="card">
                <div class="card-container">
                    <h3 class="i-title">Insert</h3>
                    <!-- <img src="./card.png" alt="card" class="card-icon"> -->
                </div>
            </section>
            <section class="mags-container">
                <form action="#" class="card-form" method="get">
                    <input type="text" name="track1" id="track1" placeholder="Enter track 1" class="inputC input-card">
                    <input type="text" name="track2" id="track2" placeholder="Enter track 2"
                        class="inputC input-track2">
                    <input type="hidden" name="button" value="" id="btnField">
                    <input type="submit" value="Save" class="primary-button save-button" id="btnSave">
                    <input type="submit" value="Emulate" class="primary-button send-button" id="btnEmulate">
                </form>
            </section>
        </div>
    </main>
    <footer>
        <div class="footer-home">
            <a href="./home.html" class="footer-icon-link">
                <!-- <img src="./Home1.png" alt="home-icon" class="footer-icon"> -->
                <div class="footer-icon">
                    <?xml version="1.0" encoding="utf-8"?>
                    <svg width="30px" height="30px" viewBox="0 0 1024 1024" xmlns="http://www.w3.org/2000/svg">
                        <path fill="#1A5157" d="M512 128 128 447.936V896h255.936V640H640v256h255.936V447.936z" />
                    </svg>
                </div>
                <p class="footer-icon-text selected">Home</p>
            </a>
            <a href="./info.html" class="footer-icon-link">
                <!-- <img src="./info.png" alt="info-icon" class="footer-icon"> -->
                <div class="footer-icon">
                    <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                    <svg fill="#5f5f5f" height="35px" width="35px" id="Layer_1" data-name="Layer 1"
                        xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16">
                        <path class="cls-1"
                            d="M8,2a6,6,0,1,0,6,6A6,6,0,0,0,8,2ZM7.30274,4.28083a.95128.95128,0,0,1,1.34971,0,.92836.92836,0,0,1,.27615.67443.95244.95244,0,0,1-1.90483,0A.92362.92362,0,0,1,7.30274,4.28083ZM9.70043,12H6.29957V10.736h.83322V7.7772H6.29957V6.51325H8.88421V10.736h.81622Z" />
                    </svg>
                </div>
                <p class="footer-icon-text">Info</p>
            </a>
            <a href="./login.html">
                <!-- <img src="./logOut.png" alt="logout-icon" class="footer-icon"> -->
                <div class="footer-icon logout">
                    <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                    <svg fill="#5f5f5f" width="30px" height="30px" viewBox="0 0 24 24"
                        xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M4,12a1,1,0,0,0,1,1h7.59l-2.3,2.29a1,1,0,0,0,0,1.42,1,1,0,0,0,1.42,0l4-4a1,1,0,0,0,.21-.33,1,1,0,0,0,0-.76,1,1,0,0,0-.21-.33l-4-4a1,1,0,1,0-1.42,1.42L12.59,11H5A1,1,0,0,0,4,12ZM17,2H7A3,3,0,0,0,4,5V8A1,1,0,0,0,6,8V5A1,1,0,0,1,7,4H17a1,1,0,0,1,1,1V19a1,1,0,0,1-1,1H7a1,1,0,0,1-1-1V16a1,1,0,0,0-2,0v3a3,3,0,0,0,3,3H17a3,3,0,0,0,3-3V5A3,3,0,0,0,17,2Z" />
                    </svg>
                </div>
                <p class="footer-icon-text">Log out</p>
            </a>
        </div>
    </footer>
    <script src="./main.js"></script>
</body>

</html>)=====";