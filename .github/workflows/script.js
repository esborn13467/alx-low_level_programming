
  document.getElementById('yesButton').addEventListener('click', function() {
    alert('Yay! Let’s go out!');
  });
  
  var noButton = document.getElementById('noButton');
  noButton.addEventListener('mouseover', function() {
    noButton.style.position = 'absolute';
  });
  
  noButton.addEventListener('mousemove', function(e) {
    var x = e.clientX;
    var y = e.clientY;
    noButton.style.left = x + 'px';
    noButton.style.top = y + 'px';
  });
  
  noButton.addEventListener('click', function() {
    noButton.style.animation = 'floatAway 1s ease-out forwards';
  });
    
