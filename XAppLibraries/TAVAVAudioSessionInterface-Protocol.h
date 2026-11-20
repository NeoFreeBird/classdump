//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAVAudioSessionInterface_Protocol_h
#define TAVAVAudioSessionInterface_Protocol_h
@import Foundation;

@class NSString;

@protocol TAVAVAudioSessionInterface

@required

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) unsigned long long categoryOptions;
@property (nonatomic, readonly) _Bool secondaryAudioShouldBeSilencedHint;

/* required instance methods */
- (_Bool)setActive:(_Bool)active withOptions:(unsigned long long)options error:(id *)error;
- (_Bool)setCategory:(id)category mode:(id)mode options:(unsigned long long)options error:(id *)error;

@optional

@end

#endif /* TAVAVAudioSessionInterface_Protocol_h */
