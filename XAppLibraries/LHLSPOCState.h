//
#ifndef LHLSPOCState_h
#define LHLSPOCState_h
@import Foundation;

@class NSObject;

@interface LHLSPOCState : NSObject {
    /* instance variables */
    struct POCState { struct SeqParamSet { int _profile; int _level; int _pictureWidth; int _pictureHeight; int _cropLeft; int _cropRight; int _cropTop; int _cropBottom; int _frameNumBitDepth; int _pocType; int _log2MaxPOCLSB; unsigned char _constraintSetFlags; _Bool _hasCrop; _Bool _frameMacroblocksOnly; } _sps; int _prevPOCLSB; int _prevPOCMSB; _Bool _deltaPresent; } _pocState;
}

/* instance methods */
- (_Bool)setConfigurationWithSPS:(id)sps pps:(id)pps;
- (_Bool)pocWithNALU:(id)nalu poc:(int *)poc;

@end

#endif /* LHLSPOCState_h */
