//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNWindowStateAdditions_h
#define TFNWindowStateAdditions_h
@import Foundation;

@class NSObject, NSString;

@interface TFNWindowStateAdditions : NSObject

@property (nonatomic) _Bool ignoreTitlebarInset;
@property (copy, nonatomic) NSString *frameAutosaveKey;

/* instance methods */

@end

#endif /* TFNWindowStateAdditions_h */
