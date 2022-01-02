
//  --  Do LED Display Matrix

void doDisplay() {
  if (oldRingLast != ringLast) {
    if (ringLast == 0) {
      matrix.setPixel(9, 0);
      matrix.setPixel(9, 1);
      matrix.setPixel(9, 2);
      matrix.setPixel(9, 3);
      matrix.setPixel(9, 4);
      matrix.setPixel(9, 5);
      matrix.setPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 1) {
      matrix.setPixel(9, 0);
      matrix.setPixel(9, 1);
      matrix.setPixel(9, 2);
      matrix.setPixel(9, 3);
      matrix.setPixel(9, 4);
      matrix.setPixel(9, 5);
      matrix.setPixel(9, 6);

      matrix.setPixel(8, 0);
      matrix.setPixel(8, 1);
      matrix.setPixel(8, 2);
      matrix.setPixel(8, 3);
      matrix.setPixel(8, 4);
      matrix.setPixel(8, 5);
      matrix.setPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 2) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.setPixel(8, 0);
      matrix.setPixel(8, 1);
      matrix.setPixel(8, 2);
      matrix.setPixel(8, 3);
      matrix.setPixel(8, 4);
      matrix.setPixel(8, 5);
      matrix.setPixel(8, 6);

      matrix.setPixel(7, 0);
      matrix.setPixel(7, 1);
      matrix.setPixel(7, 2);
      matrix.setPixel(7, 3);
      matrix.setPixel(7, 4);
      matrix.setPixel(7, 5);
      matrix.setPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 3) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.setPixel(7, 0);
      matrix.setPixel(7, 1);
      matrix.setPixel(7, 2);
      matrix.setPixel(7, 3);
      matrix.setPixel(7, 4);
      matrix.setPixel(7, 5);
      matrix.setPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 4) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.setPixel(7, 0);
      matrix.setPixel(7, 1);
      matrix.setPixel(7, 2);
      matrix.setPixel(7, 3);
      matrix.setPixel(7, 4);
      matrix.setPixel(7, 5);
      matrix.setPixel(7, 6);

      matrix.setPixel(6, 0);
      matrix.setPixel(6, 1);
      matrix.setPixel(6, 2);
      matrix.setPixel(6, 3);
      matrix.setPixel(6, 4);
      matrix.setPixel(6, 5);
      matrix.setPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 5) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.setPixel(6, 0);
      matrix.setPixel(6, 1);
      matrix.setPixel(6, 2);
      matrix.setPixel(6, 3);
      matrix.setPixel(6, 4);
      matrix.setPixel(6, 5);
      matrix.setPixel(6, 6);

      matrix.setPixel(5, 0);
      matrix.setPixel(5, 1);
      matrix.setPixel(5, 2);
      matrix.setPixel(5, 3);
      matrix.setPixel(5, 4);
      matrix.setPixel(5, 5);
      matrix.setPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 6) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.setPixel(5, 0);
      matrix.setPixel(5, 1);
      matrix.setPixel(5, 2);
      matrix.setPixel(5, 3);
      matrix.setPixel(5, 4);
      matrix.setPixel(5, 5);
      matrix.setPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 7) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.setPixel(5, 0);
      matrix.setPixel(5, 1);
      matrix.setPixel(5, 2);
      matrix.setPixel(5, 3);
      matrix.setPixel(5, 4);
      matrix.setPixel(5, 5);
      matrix.setPixel(5, 6);

      matrix.setPixel(4, 0);
      matrix.setPixel(4, 1);
      matrix.setPixel(4, 2);
      matrix.setPixel(4, 3);
      matrix.setPixel(4, 4);
      matrix.setPixel(4, 5);
      matrix.setPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 8) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.setPixel(4, 0);
      matrix.setPixel(4, 1);
      matrix.setPixel(4, 2);
      matrix.setPixel(4, 3);
      matrix.setPixel(4, 4);
      matrix.setPixel(4, 5);
      matrix.setPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 9) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.setPixel(4, 0);
      matrix.setPixel(4, 1);
      matrix.setPixel(4, 2);
      matrix.setPixel(4, 3);
      matrix.setPixel(4, 4);
      matrix.setPixel(4, 5);
      matrix.setPixel(4, 6);

      matrix.setPixel(3, 0);
      matrix.setPixel(3, 1);
      matrix.setPixel(3, 2);
      matrix.setPixel(3, 3);
      matrix.setPixel(3, 4);
      matrix.setPixel(3, 5);
      matrix.setPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 10) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.setPixel(3, 0);
      matrix.setPixel(3, 1);
      matrix.setPixel(3, 2);
      matrix.setPixel(3, 3);
      matrix.setPixel(3, 4);
      matrix.setPixel(3, 5);
      matrix.setPixel(3, 6);

      matrix.setPixel(2, 0);
      matrix.setPixel(2, 1);
      matrix.setPixel(2, 2);
      matrix.setPixel(2, 3);
      matrix.setPixel(2, 4);
      matrix.setPixel(2, 5);
      matrix.setPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 11) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.setPixel(2, 0);
      matrix.setPixel(2, 1);
      matrix.setPixel(2, 2);
      matrix.setPixel(2, 3);
      matrix.setPixel(2, 4);
      matrix.setPixel(2, 5);
      matrix.setPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 12) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.setPixel(2, 0);
      matrix.setPixel(2, 1);
      matrix.setPixel(2, 2);
      matrix.setPixel(2, 3);
      matrix.setPixel(2, 4);
      matrix.setPixel(2, 5);
      matrix.setPixel(2, 6);

      matrix.setPixel(1, 0);
      matrix.setPixel(1, 1);
      matrix.setPixel(1, 2);
      matrix.setPixel(1, 3);
      matrix.setPixel(1, 4);
      matrix.setPixel(1, 5);
      matrix.setPixel(1, 6);

      matrix.clrPixel(0, 0);
      matrix.clrPixel(0, 1);
      matrix.clrPixel(0, 2);
      matrix.clrPixel(0, 3);
      matrix.clrPixel(0, 4);
      matrix.clrPixel(0, 5);
      matrix.clrPixel(0, 6);
    }
    if (ringLast == 13) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.setPixel(1, 0);
      matrix.setPixel(1, 1);
      matrix.setPixel(1, 2);
      matrix.setPixel(1, 3);
      matrix.setPixel(1, 4);
      matrix.setPixel(1, 5);
      matrix.setPixel(1, 6);

      matrix.setPixel(0, 0);
      matrix.setPixel(0, 1);
      matrix.setPixel(0, 2);
      matrix.setPixel(0, 3);
      matrix.setPixel(0, 4);
      matrix.setPixel(0, 5);
      matrix.setPixel(0, 6);
    }
    if (ringLast == 14) {
      matrix.clrPixel(9, 0);
      matrix.clrPixel(9, 1);
      matrix.clrPixel(9, 2);
      matrix.clrPixel(9, 3);
      matrix.clrPixel(9, 4);
      matrix.clrPixel(9, 5);
      matrix.clrPixel(9, 6);

      matrix.clrPixel(8, 0);
      matrix.clrPixel(8, 1);
      matrix.clrPixel(8, 2);
      matrix.clrPixel(8, 3);
      matrix.clrPixel(8, 4);
      matrix.clrPixel(8, 5);
      matrix.clrPixel(8, 6);

      matrix.clrPixel(7, 0);
      matrix.clrPixel(7, 1);
      matrix.clrPixel(7, 2);
      matrix.clrPixel(7, 3);
      matrix.clrPixel(7, 4);
      matrix.clrPixel(7, 5);
      matrix.clrPixel(7, 6);

      matrix.clrPixel(6, 0);
      matrix.clrPixel(6, 1);
      matrix.clrPixel(6, 2);
      matrix.clrPixel(6, 3);
      matrix.clrPixel(6, 4);
      matrix.clrPixel(6, 5);
      matrix.clrPixel(6, 6);

      matrix.clrPixel(5, 0);
      matrix.clrPixel(5, 1);
      matrix.clrPixel(5, 2);
      matrix.clrPixel(5, 3);
      matrix.clrPixel(5, 4);
      matrix.clrPixel(5, 5);
      matrix.clrPixel(5, 6);

      matrix.clrPixel(4, 0);
      matrix.clrPixel(4, 1);
      matrix.clrPixel(4, 2);
      matrix.clrPixel(4, 3);
      matrix.clrPixel(4, 4);
      matrix.clrPixel(4, 5);
      matrix.clrPixel(4, 6);

      matrix.clrPixel(3, 0);
      matrix.clrPixel(3, 1);
      matrix.clrPixel(3, 2);
      matrix.clrPixel(3, 3);
      matrix.clrPixel(3, 4);
      matrix.clrPixel(3, 5);
      matrix.clrPixel(3, 6);

      matrix.clrPixel(2, 0);
      matrix.clrPixel(2, 1);
      matrix.clrPixel(2, 2);
      matrix.clrPixel(2, 3);
      matrix.clrPixel(2, 4);
      matrix.clrPixel(2, 5);
      matrix.clrPixel(2, 6);

      matrix.clrPixel(1, 0);
      matrix.clrPixel(1, 1);
      matrix.clrPixel(1, 2);
      matrix.clrPixel(1, 3);
      matrix.clrPixel(1, 4);
      matrix.clrPixel(1, 5);
      matrix.clrPixel(1, 6);

      matrix.setPixel(0, 0);
      matrix.setPixel(0, 1);
      matrix.setPixel(0, 2);
      matrix.setPixel(0, 3);
      matrix.setPixel(0, 4);
      matrix.setPixel(0, 5);
      matrix.setPixel(0, 6);
    }

    oldRingLast = ringLast;
    matrix.writeScreen();
  }



  //    ----  P&T ----

  if (oldxDisplay != xDisplay || oldyDisplay != yDisplay) {

    for (uint8_t y = 0; y < 7; y++) {
      for (uint8_t x = 100; x < 105; x++) {
        matrix.clrPixel(x, y);
      }
    }
    matrix.setPixel((xDisplay + 100), yDisplay);

    oldxDisplay = xDisplay;
    oldyDisplay = yDisplay;
    matrix.writeScreen();
  }

  if (oldzDisplay != zDisplay) {

    for (uint8_t y = 0; y < 7; y++) {
      for (uint8_t x = 95; x < 100; x++) {
        matrix.clrPixel(x, y);
      }
    }
    matrix.setPixel((zDisplay + 95), 0);
    matrix.setPixel((zDisplay + 95), 1);
    matrix.setPixel((zDisplay + 95), 2);
    matrix.setPixel((zDisplay + 95), 3);
    matrix.setPixel((zDisplay + 95), 4);
    matrix.setPixel((zDisplay + 95), 5);
    matrix.setPixel((zDisplay + 95), 6);

    oldzDisplay = zDisplay;
    
    matrix.writeScreen();
  }

}

//  char a[24] = "X";
//  char tmp[6];
//  sendCharArray((char *)(strcat(a, itoa(speedNo, tmp, 10))));

void clearText() {
  for (uint8_t y = 0; y < 7; y++) {
    for (uint8_t x = 15; x < 90; x++) {
      matrix.clrPixel(x, y);
    }
  }
}

void textDisplay(char *array) {
  clearText();
  int i = 0;
  while (array[i] != 0) {
    matrix.setCursor(15 + (i * 5), 0);
    matrix.print(array[i++]);
  }
  matrix.writeScreen();
}


void textSongDisplay(char *array) {
  clearText();
  int i = 0;
  while (array[i] != 0) {
    matrix.setCursor(45 + (i * 5), 0);
    matrix.print(array[i++]);
  }
  matrix.writeScreen();
}

void textKeySWDisplay(char *array) {
  for (uint8_t y = 0; y < 7; y++) {
    for (uint8_t x = 10; x < 15; x++) {
      matrix.clrPixel(x, y);
    }
  }
  int i = 0;
  while (array[i] != 0) {
    matrix.setCursor(10 + (i * 5), 0);
    matrix.print(array[i++]);
  }
  matrix.writeScreen();
}

void startTextDisplay(char *array) {
  int i = 0;
  while (array[i] != 0) {
    matrix.setCursor(0 + (i * 5), 0);
    matrix.print(array[i++]);
  }
}
