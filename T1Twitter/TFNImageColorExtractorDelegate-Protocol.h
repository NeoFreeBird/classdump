//
#ifndef TFNImageColorExtractorDelegate_Protocol_h
#define TFNImageColorExtractorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNImageColorExtractorDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)imageColorExtractor:(id)extractor didFinishExtractingColors:(id)colors image:(id)image identifier:(id)identifier;
- (void)imageColorExtractor:(id)extractor didFinishExtractingMostDominantColor:(id)color image:(id)image identifier:(id)identifier;

@end

#endif /* TFNImageColorExtractorDelegate_Protocol_h */
