//
#ifndef TFNStatusHashflagExtractor_h
#define TFNStatusHashflagExtractor_h
@import Foundation;

@class NSObject;

@interface TFNStatusHashflagExtractor : NSObject

/* class methods */
+ (id)orderedHashtagsFromViewModel:(id)model displayTextOptions:(unsigned long long)options;
+ (id)contentMatchedAnimatedHashflagsFromViewModel:(id)model displayTextOptions:(unsigned long long)options;

@end

#endif /* TFNStatusHashflagExtractor_h */
