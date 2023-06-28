const char* main_js = R"=====(// Uncomment this to test on a local environment
// let pollMode = "POLL MODE: Remote MIFARE card activated";
// let nfcID;
// let sensRes;
// let selRes;
// let nfcDiscoverySuccess = false;
// Comment the above lines to upload to the BomberCat

let currentLocation = localStorage.getItem("location");
let reload = localStorage.getItem("reload");
let reloaded = localStorage.getItem("reloaded");
console.log(`Current location: ${currentLocation}`);

// Update current page location
function updateLocation(location) {
    localStorage.setItem("location", location);
    localStorage.setItem("reload", true);
    localStorage.setItem("reloaded", false);
    window.location.reload();
}

function reloadPageListener(page, delay) {
    if (reload == "true") {
        // Update location and reload page
        if (reloaded == "false") {
            localStorage.setItem("reloaded", true);
            window.location.href = currentLocation;
        }

        // Reload page again with the new location
        if (reloaded == "true") {
            setTimeout(() => {
                // alert("Second reload");
                localStorage.setItem("reload", false);
                window.location.replace(page);
            }, delay);
        }
    }
}

// Home
let btnConfig = document.querySelector("#btnConfig");
let btnNfc = document.querySelector("#btnNfc");

if (btnConfig != null) {
    // btnConfig.addEventListener("click", () => { alert("Not available yet!") });
}

// Magspoof
let magspoofPage = document.querySelector("#magspoof");
let magspoofForm = document.querySelector("#magspoofForm");
let btnSave = document.querySelector("#btnSave");
let btnEmulate = document.querySelector("#btnEmulate");
let btnField = document.querySelector("#btnField");
let track1 = document.querySelector("#track1");
let track2 = document.querySelector("#track2");

// Check if magspoof.html is loaded
if (magspoofPage != null) {
    magspoofForm.addEventListener("submit", (event) => {
        event.preventDefault();
        // Save tracks in local storage
        localStorage.setItem("track1", track1.value);
        localStorage.setItem("track2", track2.value);

        updateLocation(`magspoof.html?track1=${track1.value}&track2=${track2.value}&button=${btnField.value}#`);
    });

    btnSave.addEventListener("click", (event) => {
        // btnField.setAttribute("value", "Save");
        event.preventDefault();
        alert("Not available yet!");
    });

    btnEmulate.addEventListener("click", () => {
        btnField.setAttribute("value", "Emulate");
    });

    // Load tracks from local storage
    track1.value = localStorage.getItem("track1");
    track2.value = localStorage.getItem("track2");

    reloadPageListener("magspoof.html", 500);
}

// Info
let btnSendMail = document.querySelector("#btnSendMail");

if (btnSendMail != null) {
    btnSendMail.addEventListener("click", (event) => {
        event.preventDefault();
        alert("Not available yet!")
    });
}

// NFC
let nfcPage = document.querySelector("#nfc");
let tvPollMode = document.querySelector("#tvPollMode");
let tvNfcID = document.querySelector("#tvNfcID");
let tvSensRes = document.querySelector("#tvSensRes");
let tvSelRes = document.querySelector("#tvSelRes");
let btnRead = document.querySelector("#btnRead");
let btnClearNFC = document.querySelector("#btnClearNFC");
let btnEmulateNFC = document.querySelector("#btnEmulateNFC");
let loadingScroller = document.querySelector("#loadingScroller");

let detectTagsDelay = 500;
let tagReaded = localStorage.getItem("tagReaded");
let emulateState = localStorage.getItem("emulateState");
console.log(`Emulate state: ${emulateState}`);

// Set emulate state to false if the user leave the page
if (nfcPage == null) {
    localStorage.setItem("emulateState", false);
}

// Check if nfc.html is loaded
if (nfcPage != null) {
    tvPollMode.textContent = pollMode;
    tvNfcID.value = nfcID;
    tvSensRes.value = sensRes;
    tvSelRes.value = selRes;

    btnClearNFC.addEventListener("click", (event) => {
        event.preventDefault();
        localStorage.setItem("emulateState", false);
        updateLocation(`nfc.html?clear=true#`);
    });

    btnRead.addEventListener("click", (event) => {
        event.preventDefault();
        localStorage.setItem("emulateState", false);
        updateLocation(`nfc.html?runDetectTags=true#`);
    });

    btnEmulateNFC.addEventListener("click", (event) => {
        event.preventDefault();

        // Toggle emulate state
        if (emulateState == "true") {
            localStorage.setItem("emulateState", false);
            emulateState = localStorage.getItem("emulateState");
        } else {
            localStorage.setItem("emulateState", true);
            emulateState = localStorage.getItem("emulateState");
        }

        window.location.href = `nfc.html?emulateState=${emulateState}#`;
    });

    reloadPageListener("nfc.html?clear=false#", detectTagsDelay);

    if (reload == "true" && window.location.href.includes("runDetectTags=true")) {
        btnRead.value = "Reading...";

        if (reloaded == "true") {
            setTimeout(() => {
                localStorage.setItem("tagReaded", true);
                alert("Remove card from the reader!");
            }, detectTagsDelay);
        }

        reloadPageListener("nfc.html?runDetectTags=false#", detectTagsDelay);
    } else {
        btnRead.value = "Read";
    }

    if (tagReaded == "true") {
        localStorage.setItem("tagReaded", false);
        tagReaded = localStorage.getItem("tagReaded");

        // NFC read failed
        if (nfcDiscoverySuccess == false) {
            alert("Could not read NFC tag!");
        }
    }

    // Change text and state of the Emulate NFC ID button
    if (emulateState == "true") {
        btnEmulateNFC.textContent = "Stop";
        btnEmulateNFC.classList.remove("primary-button");
        btnEmulateNFC.classList.add("emulate-nfc-button");
        loadingScroller.classList.add("lds-roller");

        setTimeout(() => {
            btnEmulateNFC.scrollIntoView({ behavior: "smooth" });
        }, 500);
    } else {
        btnEmulateNFC.textContent = "Emulate";
        btnEmulateNFC.classList.add("primary-button");
        btnEmulateNFC.classList.remove("emulate-nfc-button");
        loadingScroller.classList.remove("lds-roller");
    }
}

// WiFi Manager
let configPage = document.querySelector("#configPage");
let btnSaveWiFiConfig = document.querySelector("#btnSaveWiFiConfig");

// Check if config.html is loaded
if (configPage != null) {
    btnSaveWiFiConfig.addEventListener("click", (event) => {
        event.preventDefault();
        alert("Not available yet!");
    });
})=====";