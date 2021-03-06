//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class VOTUIMapsExplorationLocationView, VOTUIMapsExplorationRotaryView;

@interface VOTUIMapsExplorationView : UIView
{
    long long _currentIndex;
    long long _lastIndex;
    VOTUIMapsExplorationLocationView *_currentLocationView;
    VOTUIMapsExplorationRotaryView *_currentRotaryView;
    struct CGPoint _currentCenter;
    struct CGPoint _currentLocation;
    struct CGPoint _lastLocation;
}

@property(retain, nonatomic) VOTUIMapsExplorationRotaryView *currentRotaryView; // @synthesize currentRotaryView=_currentRotaryView;
@property(retain, nonatomic) VOTUIMapsExplorationLocationView *currentLocationView; // @synthesize currentLocationView=_currentLocationView;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) struct CGPoint currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) struct CGPoint currentCenter; // @synthesize currentCenter=_currentCenter;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)highlightExplorationSegmentWithIndex:(long long)arg1;
- (void)updateUIWithCurrentLocation:(struct CGPoint)arg1;
- (void)updateUIWithCenter:(struct CGPoint)arg1 andExplorationSegments:(id)arg2;
- (void)updateUIWithCenter:(struct CGPoint)arg1;
- (id)init;

@end

