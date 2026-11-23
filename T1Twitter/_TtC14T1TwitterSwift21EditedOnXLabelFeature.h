//
#ifndef _TtC14T1TwitterSwift21EditedOnXLabelFeature_h
#define _TtC14T1TwitterSwift21EditedOnXLabelFeature_h
@import Foundation;

@class NSObject, _$sSD -> T1TwitterSwift.EditedOnXLabelMemoKey Swift.Bool, _$sSD -> _$ss5Int64VMn Swift.Bool;

@interface T1TwitterSwift.EditedOnXLabelFeature : NSObject { // (Swift)
    /* instance variables */
    Swift.Dictionary -> T1TwitterSwift.EditedOnXLabelMemoKey Swift.Bool isEnabledByMemoKey;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Swift.Bool isHiddenByGameChipByUserID;
}

/* instance methods */
- (id)init;
- (void)featureSwitchesDidUpdate:(id)update;

@end

#endif /* _TtC14T1TwitterSwift21EditedOnXLabelFeature_h */
