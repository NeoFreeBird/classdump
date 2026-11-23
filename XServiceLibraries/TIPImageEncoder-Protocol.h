//
#ifndef TIPImageEncoder_Protocol_h
#define TIPImageEncoder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageEncoder <NSObject>

@required

/* required instance methods */
- (id)tip_writeDataWithImage:(id)image encodingOptions:(long long)options suggestedQuality:(float)quality error:(out id *)error;

@optional

/* optional instance methods */
- (_Bool)tip_writeToFile:(id)file withImage:(id)image encodingOptions:(long long)options suggestedQuality:(float)quality atomically:(_Bool)atomically error:(out id *)error;

@end

#endif /* TIPImageEncoder_Protocol_h */
