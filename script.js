
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
    
  deploy:
    environment:
      name: github-pages
      url: ${{ steps.deployment.outputs.page_url }}
    runs-on: ubuntu-latest
    steps:
      - name: Checkout
        uses: actions/checkout@v4
      - name: Setup Pages
        uses: actions/configure-pages@v4
      - name: Upload artifact
        uses: actions/upload-pages-artifact@v3
        with:
          # Upload entire repository
          path: '.'
      - name: Deploy to GitHub Pages
        id: deployment
        uses: actions/deploy-pages@v4
