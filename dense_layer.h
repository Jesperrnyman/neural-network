#pragma once

namespace ml {
class DenseLayer

const std::vector<double>& output
const std::vector

const std::vector<double>& bias() const;

const std::vector<std::vector<double>>& weights() const;


private:
    std::vector<double> myOutput;
    std::vector<double> myError;
    std::vector<double> myBias;
    std::vector<std::vector<double>> myWeights;

};

} // namespace ml

// Skapa en klass som heter DenseLayer.

// Radera dafault-konstruktorn, så att man inte kan skapa ett
//dense-lager utan noder eller vikter.

// Lägg till en konstruktor som tar antalet noder samt antal vikter
// per nod i lagret.

//Lägg till get och set metoder om ni finner det lämpligt.

// Fundera vilka publika metoder som behövs. Vi behöver kunna köra.
// 1. Feedforward med en ny input (Förslagsvis i en vektor).
// 2. Backpropagera med referensdata (Förslagsvis i en vektor).
// 3. Backpropagera med nästa lager (om ett sådant finns).
// 4. Optimera våra parametrar (förslagsvis med input i en vektor).