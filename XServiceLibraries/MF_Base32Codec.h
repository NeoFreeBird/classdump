//
#ifndef MF_Base32Codec_h
#define MF_Base32Codec_h
@import Foundation;

@class NSObject;

@interface MF_Base32Codec : NSObject

/* class methods */
+ (id)dataWithBase32String:(id)string;
+ (id)base32StringWithData:(id)data;

@end

#endif /* MF_Base32Codec_h */
