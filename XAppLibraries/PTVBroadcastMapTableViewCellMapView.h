//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastMapTableViewCellMapView_h
#define PTVBroadcastMapTableViewCellMapView_h
@import Foundation;

#include "MKAnnotation-Protocol.h"
#include "MKMapViewDelegate-Protocol.h"
#include "PTVBroadcastMapTableViewCellDelegate-Protocol.h"

@class MKMapView, NSNumber, NSObject, NSString, UIView;

@interface PTVBroadcastMapTableViewCellMapView : UIView <MKMapViewDelegate> {
    /* instance variables */
    PTVBroadcastMapTableViewCellMapView *_weakSelf;
    NSNumber *_heading;
    UIView *_mapOverlayView;
}

@property (readonly, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) id <PTVBroadcastMapTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSObject<MKAnnotation> *mapAnnotation;
@property (nonatomic) _Bool includeHeading;
@property (nonatomic) _Bool showAsBroadcaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)mapViewDidFinishRenderingMap:(id)map fullyRendered:(_Bool)rendered;
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (void)showMapViewAnimated:(_Bool)animated;
- (void)coordinateDidChange;
- (void)setHeading:(id)heading;
- (void)_reloadMapView;
- (void)_centerMapView;
- (void)_handlePinch:(id)pinch;
- (void)_handleDoubleTap:(id)tap;
- (void)_handleLongPress:(id)press;

@end

#endif /* PTVBroadcastMapTableViewCellMapView_h */
