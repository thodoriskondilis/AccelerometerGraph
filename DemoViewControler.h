//
//  DemoViewControler.h
//  AccelerometerGraph
//
//  Created by Thodoris Kondilis on 10/15/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DemoViewControler : UIViewController
@property (retain, nonatomic) IBOutlet UITextView *demoTextView;
@property (retain, nonatomic) IBOutlet UIToolbar *demoItem;
- (IBAction)demoButton:(id)sender forEvent:(UIEvent *)event;

@end
