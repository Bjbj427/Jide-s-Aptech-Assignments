// VIDEO DATA WITH THUMBNAILS
const videos = [
  { title: "HTML & CSS Full Course", views: "17M views", thumb: "Html course.webp" },
  { title: "JavaScript Basics", views: "1.2M views", thumb: "java basics.webp" },
  { title: "Bukayo saka's Origination", views: "800K views", thumb: "saka.webp" },
  { title: "Man u vs Man city (Highlights)", views: "2M views", thumb: "football.webp" },
  { title: "CSS Grid Tutorial", views: "600K views", thumb: "tutorial.webp" }
];

// FUNCTION TO SHOW VIDEOS
function showVideos(list) {
  const container = document.getElementById("videos");
  container.innerHTML = "";

  list.forEach(video => {
    container.innerHTML += `
      <div class="card">
        <img src="${video.thumb}" alt="${video.title}" class="thumb">
        <div class="title">${video.title}</div>
        <div class="views">${video.views}</div>
      </div>
    `;
  });
}

// SEARCH FUNCTION
function searchVideos() {
  const text = document.getElementById("search").value.toLowerCase();
  const filtered = videos.filter(v => v.title.toLowerCase().includes(text));
  showVideos(filtered);
}

// SHOW ALL VIDEOS ON PAGE LOAD
showVideos(videos);
