// The MIT License(MIT)
//
// Copyright 2017 Huldra
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#include "engine/easy.h"

#include "engine/arctic_platform.h"

namespace arctic {
namespace easy {

void DrawLine(Vec2Si32 a, Vec2Si32 b, Rgba color);
void DrawLine(Vec2Si32 a, Vec2Si32 b, Rgba color_a, Rgba color_b);
void DrawTriangle(Vec2Si32 a, Vec2Si32 b, Vec2Si32 c, Rgba color);
void DrawTriangle(Vec2Si32 a, Vec2Si32 b, Vec2Si32 c,
    Rgba color_a, Rgba color_b, Rgba color_c);

void ShowFrame() {
    // TODO(Huldra): Implement this
    Draw();
    ProcessUserInput();
}

bool IsKeyImpl(Ui32 key_code) {
    // TODO(Huldra): Imlement this
    return false;
}

bool IsKey(const KeyCode key_code) {
    return IsKeyImpl(static_cast<Ui32>(key_code));
}

bool IsKey(const char *keys) {
    for (const char *key = keys; key != nullptr; ++key) {
        if (IsKeyImpl(static_cast<Ui32>(*key))) {
            return true;
        }
    }
    return false;
}

bool IsKey(const char key) {
    return IsKeyImpl(static_cast<Ui32>(key));
}

bool IsKey(const std::string &keys) {
    return IsKey(keys.c_str());
}

Vec2Si32 MousePos();
Vec2Si32 MouseMove();

Vec2Si32 ScreenSize();

void ResizeScreen(const Si32 width, const Si32 height) {
    // TODO(Huldra): Implement this
    return;
}

double Time();
void Sleep(double duration_seconds);

std::vector<Ui8> ReadFile(const char *file_name);
void WriteFile(const char *file_name, const Ui8 *data, const Ui64 data_size);

}  // namespace easy
}  // namespace arctic