//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPBasicCGImageSourceCodec_h
#define TIPBasicCGImageSourceCodec_h
@import Foundation;

#include "TIPImageCodec-Protocol.h"
#include "TIPImageDecoder-Protocol.h"
#include "TIPImageEncoder-Protocol.h"

@class NSObject, NSString;

@interface TIPBasicCGImageSourceCodec : NSObject <TIPImageCodec>

@property (readonly, nonatomic) id <TIPImageDecoder> tip_decoder;
@property (readonly, nonatomic) id <TIPImageEncoder> tip_encoder;
@property (readonly, nonatomic) _Bool tip_isAnimated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)codecWithImageType:(id)type;

/* instance methods */
- (id)initWithDecoder:(id)decoder encoder:(id)encoder animated:(_Bool)animated;

@end

#endif /* TIPBasicCGImageSourceCodec_h */
