//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPBasicCGImageSourceEncoder_h
#define TIPBasicCGImageSourceEncoder_h
@import Foundation;

#include "TIPImageEncoder-Protocol.h"

@class NSObject, NSString, UTType;

@interface TIPBasicCGImageSourceEncoder : NSObject <TIPImageEncoder>

@property (readonly, copy, nonatomic) UTType *UTType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUTType:(id)uttype;
- (id)tip_writeDataWithImage:(id)image encodingOptions:(long long)options suggestedQuality:(float)quality error:(out id *)error;
- (_Bool)tip_writeToFile:(id)file withImage:(id)image encodingOptions:(long long)options suggestedQuality:(float)quality atomically:(_Bool)atomically error:(out id *)error;

@end

#endif /* TIPBasicCGImageSourceEncoder_h */
