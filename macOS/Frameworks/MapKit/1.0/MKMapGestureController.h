//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKVariableDelayTapRecognizerDelegate-Protocol.h>
#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/_MKUserInteractionGestureRecognizerTouchObserver-Protocol.h>

@class MKBasicMapView, MKCompassView, MKRotationFilter, MKScaleView, MKTiltGestureRecognizer, MKTwoFingerPanGestureRecognizer, MKVariableDelayTapRecognizer, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, VKCompoundAnimation, VKDynamicAnimation, _MKConditionalPanGestureRecognizer, _MKUserInteractionGestureRecognizer;
@protocol MKMapGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate>
{
    MKBasicMapView *_mapView;
    id <MKMapGestureControllerDelegate> _delegate;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    MKRotationFilter *_rotationFilter;
    BOOL _rotationSnappingEnabled;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPanGestureRecognizer *_verticalPanGestureRecognizer;
    _MKConditionalPanGestureRecognizer *_panRotationGestureRecognizer;
    struct CGPoint _panRotateStartPoint;
    _MKConditionalPanGestureRecognizer *_panZoomGestureRecognizer;
    struct CGPoint _panZoomStartPoint;
    UIPanGestureRecognizer *_scaleDragGestureRecognizer;
    UIPanGestureRecognizer *_compassRotationGestureRecognizer;
    BOOL _compassRotateBeganInPositiveDirection;
    UIPanGestureRecognizer *_compassTiltGestureRecognizer;
    double _lastScale;
    VKDynamicAnimation *_pinchDecelerationAnimation;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _gestureCount;
    BOOL _panWithMomentum;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    VKDynamicAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    VKDynamicAnimation *_tiltDecelerationAnimation;
    BOOL _didStartLongPress;
    MKTwoFingerPanGestureRecognizer *_twoFingerPanGestureRecognizer;
    BOOL _isPanning;
    BOOL _isPinching;
    double _lastZoomPanTranslation;
}

@property(readonly, nonatomic) UIPanGestureRecognizer *twoFingerPanGestureRecognizer; // @synthesize twoFingerPanGestureRecognizer=_twoFingerPanGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *verticalPanGestureRecognizer; // @synthesize verticalPanGestureRecognizer=_verticalPanGestureRecognizer;
@property(nonatomic) BOOL panWithMomentum; // @synthesize panWithMomentum=_panWithMomentum;
@property(retain, nonatomic) MKRotationFilter *rotationFilter; // @synthesize rotationFilter=_rotationFilter;
@property(retain, nonatomic) MKCompassView *compassView; // @synthesize compassView=_compassView;
@property(retain, nonatomic) MKScaleView *scaleView; // @synthesize scaleView=_scaleView;
@property(readonly, nonatomic) MKBasicMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <MKMapGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer; // @synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer; // @synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleZoomPan:(id)arg1;
- (void)_handleCompassRotation:(id)arg1;
- (void)_handleRotationPan:(id)arg1;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)_handleStandardPan:(id)arg1;
- (struct CGPoint)_snapPointToDevicePixels:(struct CGPoint)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)_updateRotationGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 rotation:(double)arg3 velocity:(double)arg4;
- (void)handleRotation:(id)arg1;
- (void)handleTwoFingerPan:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)_handleStandardTilt:(id)arg1;
- (void)clearGestureRecognizersInFlight;
- (void)_clearGesture:(id)arg1;
- (void)stopUserInteractionFromExternalGesture;
- (void)startUserInteractionFromExternalGesture;
- (void)endGesturing;
- (void)beginGesturing;
- (void)stopDynamicAnimations;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
- (void)dealloc;
@property(nonatomic, getter=isTiltEnabled) BOOL tiltEnabled;
@property(nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

