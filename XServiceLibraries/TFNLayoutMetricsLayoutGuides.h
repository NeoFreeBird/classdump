//
#ifndef TFNLayoutMetricsLayoutGuides_h
#define TFNLayoutMetricsLayoutGuides_h
@import Foundation;

#include "TFNLayoutMetricsLayoutGuide.h"

@class NSMutableArray, NSObject, UILayoutGuide, UIView;

@interface TFNLayoutMetricsLayoutGuides : NSObject {
    /* instance variables */
    UIView *_view;
    NSMutableArray *_allLayoutMetricsLayoutGuides;
}

@property (weak, nonatomic) UIView *canvasView;
@property (readonly, nonatomic) UILayoutGuide *displayArea;
@property (readonly, nonatomic) UILayoutGuide *content;
@property (readonly, nonatomic) UILayoutGuide *avatar;
@property (readonly, nonatomic) UILayoutGuide *username;
@property (readonly, nonatomic) UILayoutGuide *body;
@property (readonly, nonatomic) UILayoutGuide *accessory;

/* instance methods */

@end

#endif /* TFNLayoutMetricsLayoutGuides_h */
