//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKDocumentRoot.h>

@class TSSStylesheet, UIViewController;

@interface STTextTangierDocumentRoot : TSKDocumentRoot
{
    UIViewController *_viewController;
    TSSStylesheet *_aStylesheet;
}

@property(readonly, nonatomic) TSSStylesheet *aStylesheet; // @synthesize aStylesheet=_aStylesheet;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)stylesheet;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

