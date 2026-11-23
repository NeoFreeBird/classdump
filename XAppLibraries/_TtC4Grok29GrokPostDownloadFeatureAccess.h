//
#ifndef _TtC4Grok29GrokPostDownloadFeatureAccess_h
#define _TtC4Grok29GrokPostDownloadFeatureAccess_h
@import Foundation;

@class Grok.GrokPostDownloadFeatureAccess.Snapshot ?, NSObject, _$sSo24TPSFeatureSwitchesAccess_p;

@interface Grok.GrokPostDownloadFeatureAccess : NSObject { // (Swift)
    /* instance variables */
    __C.TPSFeatureSwitchesAccess featureSwitches;
    Grok.GrokPostDownloadFeatureAccess.Snapshot ? $__lazy_storage_$_snapshot;
}

/* instance methods */
- (long long)targetFor:(long long)_for;
- (id)resolveWithLegacyTitle:(id)title surface:(long long)surface;
- (void)recordExposureFor:(long long)_for;
- (id)init;

@end

#endif /* _TtC4Grok29GrokPostDownloadFeatureAccess_h */
