//
#ifndef NOZCompressionLibrary_h
#define NOZCompressionLibrary_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NOZCompressionLibrary : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_coderQueue;
    NSMutableDictionary *_encoders;
    NSMutableDictionary *_decoders;
}

@property (readonly, copy) NSDictionary *allEncoders;
@property (readonly, copy) NSDictionary *allDecoders;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initInternal;
- (id)encoderForMethod:(unsigned short)method;
- (id)decoderForMethod:(unsigned short)method;
- (void)setEncoder:(id)encoder forMethod:(unsigned short)method;
- (void)setDecoder:(id)decoder forMethod:(unsigned short)method;

@end

#endif /* NOZCompressionLibrary_h */
