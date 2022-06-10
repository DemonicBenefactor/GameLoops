
public class GameLoop {

  public static void main(String[] args) {
    init();
    gameLoop();
  }

  static void init() {}
  static void gameLoop() {
    long frameStart, frameTime, delay;
    final long FPS = 1000 / 60;
    while (true) {
      frameStart = System.currentTimeMillis();
      // inputs();
      // update();
      // render();
      delay = FPS - (System.currentTimeMillis() - frameStart);
      try {
        Thread.sleep(delay);
      } catch (Exception e) {
        e.printStackTrace();
      }
    }
  }
}

