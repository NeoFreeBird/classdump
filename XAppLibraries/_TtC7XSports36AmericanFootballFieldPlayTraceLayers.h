//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports36AmericanFootballFieldPlayTraceLayers_h
#define _TtC7XSports36AmericanFootballFieldPlayTraceLayers_h
@import Foundation;

@class Swift.Bool, XSports.AmericanFootballFieldPlayTraceLayers.PinMode, XSports.AmericanFootballFieldPlayTraceLayers.PlantedPinMode, XSports.AmericanFootballFieldPlayerPin, XSports.AmericanFootballGameEngine.Frame ?, XSports.AmericanFootballGameEngine.Presentation ?, XSports.AmericanFootballPlayGeometry, XSports.AmericanFootballPlayPacing, XSports.AmericanFootballPlayProgressValues, XSports.SportsFieldRouteTracerLayers, XSports.SportsImageLoader ?, XSports.SportsPathSampler ?, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo16TIPImagePipelineCSg, _TtCs12_SwiftObject;

@interface XSports.AmericanFootballFieldPlayTraceLayers : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.CAShapeLayer leg1Layer;
    __C.CAShapeLayer leg2Layer;
    __C.CAShapeLayer snapMarkerLayer;
    __C.CAShapeLayer transferDotLayer;
    __C.CAShapeLayer transferFlashLayer;
    __C.CAShapeLayer endMarkerLayer;
    __C.CAShapeLayer penaltyFlagLayer;
    __C.CAShapeLayer incomingLOSLayer;
    XSports.AmericanFootballFieldPlayerPin plantedPin;
    XSports.AmericanFootballFieldPlayerPin movingPin;
    XSports.SportsFieldRouteTracerLayers routeTracer;
    XSports.SportsImageLoader ? $__lazy_storage_$_playerLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_passerLoader;
    XSports.AmericanFootballGameEngine.Presentation ? presentation;
    XSports.AmericanFootballPlayGeometry geometry;
    XSports.AmericanFootballPlayPacing pacing;
    Swift.Bool hasLeg2;
    Swift.Bool leg1IsAir;
    Swift.Bool isTakeaway;
    XSports.AmericanFootballFieldPlayTraceLayers.PinMode pinMode;
    XSports.AmericanFootballFieldPlayTraceLayers.PlantedPinMode plantedPinMode;
    XSports.SportsPathSampler ? leg1Sampler;
    XSports.SportsPathSampler ? leg2Sampler;
    nominal type descriptor for CoreGraphics.CGFloat scale;
    XSports.AmericanFootballPlayProgressValues values;
    XSports.AmericanFootballGameEngine.Frame ? lastFrame;
}

@end

#endif /* _TtC7XSports36AmericanFootballFieldPlayTraceLayers_h */
