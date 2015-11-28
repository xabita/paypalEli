//
//  ViewController.h
//  PayPalEli
//
//  Created by Elizabeth Martínez Gómez on 28/11/15.
//  Copyright © 2015 Elizabeth Martínez Gómez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPagar:(UIButton *)sender;

@end

