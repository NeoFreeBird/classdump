//
#ifndef _TtC14T1TwitterSwift20URTSmartTagChartCell_h
#define _TtC14T1TwitterSwift20URTSmartTagChartCell_h
@import Foundation;

@class T1TwitterSwift.CashTagView ?, TFNTableViewCell, _$s10Foundation21NSKeyValueObservationCMn ?, _$sSSSg;

@interface T1TwitterSwift.URTSmartTagChartCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    Swift.String? configuredSmartTagID;
    T1TwitterSwift.CashTagView ? cashTagView;
    nominal type descriptor for Foundation.NSKeyValueObservation ? scrollObservation;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)didFirstDisplayInDataViewController:(id)controller;
- (void)prepareForReuse;

@end

#endif /* _TtC14T1TwitterSwift20URTSmartTagChartCell_h */
