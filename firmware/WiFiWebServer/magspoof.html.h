const char* magspoof_html = R"=====(<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>MagSpoof</title>
    <link rel="shortcut icon" href="./Símbolo EC.svg" type="image/x-icon">
    <link rel="stylesheet" href="styles.css">
</head>

<body id="magspoof">
    <header>
        <div class="btn-back-container">
            <a href="./home.html" class="btn-back">
                <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                <svg width="40px" height="40px" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg">
                    <path d="M11 6L5 12M5 12L11 18M5 12H19" stroke="#000000" stroke-width="2" stroke-linecap="round"
                        stroke-linejoin="round" />
                </svg>
            </a>
        </div>
        <div>
            <h4 class="config-header">MagSpoof</h4>
        </div>
    </header>
    <main>
        <div class="main-background">
            <div class="main-content">
                <section class="card-container">
                    <div class="i-title-container">
                        <h3 class="i-title">Insert</h3>
                    </div>
                    <div class="card-icon">
                        <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                        <svg width="40px" height="40px" viewBox="0 0 24 24" fill="none"
                            xmlns="http://www.w3.org/2000/svg">
                            <path d="M3.5 10H20.5" stroke="#666666" stroke-width="2" stroke-linecap="round" />
                            <path d="M6 14H8" stroke="#666666" stroke-width="2" stroke-linecap="round" />
                            <path d="M11 14H13" stroke="#666666" stroke-width="2" stroke-linecap="round" />
                            <path
                                d="M3 9C3 7.11438 3 6.17157 3.58579 5.58579C4.17157 5 5.11438 5 7 5H12H17C18.8856 5 19.8284 5 20.4142 5.58579C21 6.17157 21 7.11438 21 9V12V15C21 16.8856 21 17.8284 20.4142 18.4142C19.8284 19 18.8856 19 17 19H12H7C5.11438 19 4.17157 19 3.58579 18.4142C3 17.8284 3 16.8856 3 15V12V9Z"
                                stroke="#666666" stroke-width="2" stroke-linejoin="round" />
                        </svg>
                    </div>
                </section>
                <section class="mags-container">
                    <form action="#" class="card-form" method="get" id="magspoofForm">
                        <input type="text" name="track1" id="track1" placeholder="Enter track 1"
                            class="inputC input-card">
                        <input type="text" name="track2" id="track2" placeholder="Enter track 2"
                            class="inputC input-track2">
                        <input type="hidden" name="button" value="" id="btnField">
                        <input type="submit" value="Save" class="primary-button save-button" id="btnSave">
                        <input type="submit" value="Emulate" class="primary-button send-button" id="btnEmulate">
                    </form>
                </section>
            </div>
        </div>
    </main>
    <footer id="footerSection">
        <div class="footer-home">
            <a href="./home.html" class="footer-icon-link">
                <div class="footer-icon">
                    <?xml version="1.0" encoding="utf-8"?>
                    <svg width="30px" height="30px" viewBox="0 0 1024 1024" xmlns="http://www.w3.org/2000/svg">
                        <path fill="#1A5157" d="M512 128 128 447.936V896h255.936V640H640v256h255.936V447.936z" />
                    </svg>
                </div>
                <p class="footer-icon-text selected">Home</p>
            </a>
            <a href="./info.html" class="footer-icon-link">
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
            <a href="" id="btnStore">
                <div class="footer-icon">
                    <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                    <svg fill="#5f5f5f" width="35px" height="35px" viewBox="0 0 24 24"
                        xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M22 5c0-1.654-1.346-3-3-3H5C3.346 2 2 3.346 2 5v2.831c0 1.053.382 2.01 1 2.746V19c0 1.103.897 2 2 2h14c1.103 0 2-.897 2-2v-8.424c.618-.735 1-1.692 1-2.746V5zm-2 0v2.831c0 1.14-.849 2.112-1.891 2.167L18 10c-1.103 0-2-.897-2-2V4h3c.552 0 1 .449 1 1zM10 4h4v4c0 1.103-.897 2-2 2s-2-.897-2-2V4zM4 5c0-.551.448-1 1-1h3v4c0 1.103-.897 2-2 2l-.109-.003C4.849 9.943 4 8.971 4 7.831V5zm6 14v-3h4v3h-4zm6 0v-3c0-1.103-.897-2-2-2h-4c-1.103 0-2 .897-2 2v3H5v-7.131c.254.067.517.111.787.125A3.988 3.988 0 0 0 9 10.643c.733.832 1.807 1.357 3 1.357s2.267-.525 3-1.357a3.988 3.988 0 0 0 3.213 1.351c.271-.014.533-.058.787-.125V19h-3z" />
                    </svg>
                </div>
                <p class="footer-icon-text store-text">Store</p>
            </a>
        </div>
    </footer>
    <script src="./main.js"></script>
</body>

</html>)=====";