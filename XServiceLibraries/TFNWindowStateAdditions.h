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
