//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLabsAudioReverb_h
#define TLabsAudioReverb_h
@import Foundation;

@class NSObject;

@interface TLabsAudioReverb : NSObject {
    /* instance variables */
    struct revmodel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; struct comb { float x110; float x1; float x2; float x3; float *x4; int x5; int x6; } x[8]; struct comb { float x120; float x1; float x2; float x3; float *x4; int x5; int x6; } x[8]; struct allpass { float x130; float *x1; int x2; int x3; } x[4]; struct allpass { float x140; float *x1; int x2; int x3; } x[4]; float x15[1116]; float x16[1139]; float x17[1188]; float x18[1211]; float x19[1277]; float x20[1300]; float x21[1356]; float x22[1379]; float x23[1422]; float x24[1445]; float x25[1491]; float x26[1514]; float x27[1557]; float x28[1580]; float x29[1617]; float x30[1640]; float x31[556]; float x32[579]; float x33[441]; float x34[464]; float x35[341]; float x36[364]; float x37[225]; float x38[248]; } * _revmodel;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)updateParameters:(struct { unsigned char x0; float x1; float x2; float x3; float x4; float x5; })parameters;
- (void)reverb:(struct { unsigned char x0; float x1; float x2; float x3; float x4; float x5; })reverb audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)list asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;

@end

#endif /* TLabsAudioReverb_h */
