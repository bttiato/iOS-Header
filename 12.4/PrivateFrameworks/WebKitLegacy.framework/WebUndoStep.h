//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebUndoStep : NSObject
{
    struct RefPtr<WebCore::UndoStep, WTF::DumbPtrTraits<WebCore::UndoStep>> m_step;
}

+ (id)stepWithUndoStep:(struct UndoStep *)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct UndoStep *)step;
- (void)dealloc;
- (id)initWithUndoStep:(struct UndoStep *)arg1;

@end

