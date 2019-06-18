//
//  RNLBarCodeScannerViewImplementation.h
//  RNLBarCode
//
//  Created by Maksym Domin on 6/18/19.
//  Copyright © 2019 rnlibrary. All rights reserved.
//

@protocol RNLBarCodeScannerViewImplementation

- (void)cleanUp;
- (void)onSetProps:(NSArray<NSString *> *)changedProps parent:(RNLBarCodeScannerView *)parent;
- (void)layoutInParent:(RNLBarCodeScannerView *)parent;

@end

